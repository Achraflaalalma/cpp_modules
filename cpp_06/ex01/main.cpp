/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:22:28 by alaalalm          #+#    #+#             */
/*   Updated: 2024/07/24 17:55:39 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data data;
    data.id = 42;
    data.name = "Test";
    data.value = 3.14;

    // Serialize the Data object
    uintptr_t raw = Serializer::serialize(&data);

    // Deserialize the raw value back to a Data pointer
    Data* deserializedData = Serializer::deserialize(raw);

    // Check if the original pointer and deserialized pointer are the same
    if (deserializedData == &data) {
        std::cout << "Serialization and deserialization are successful!" << std::endl;
        std::cout << "Data ID: " << deserializedData->id << std::endl;
        std::cout << "Data Name: " << deserializedData->name << std::endl;
        std::cout << "Data Value: " << deserializedData->value << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }
    return 0;
}

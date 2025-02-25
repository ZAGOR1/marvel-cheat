#pragma once



USTRUCT(BlueprintType)
struct FTableRowBase
{
    GENERATED_BODY()

public:
    // Add any common properties for table rows here
};

UCLASS()
class ENGINE_API UDataTable : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DataTable")
    UScriptStruct* RowStruct;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DataTable")
    TArray<uint8> Rows;

    // Add any necessary functions for the DataTable here
};
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsConfigItemsConfigComponent;
@protocol ComGoogleAppsBigtopDataClientexperimentoverridesApiClientExperimentOverridesComponent, ComGoogleAppsBigtopDataCommonCommonComponent, ComGoogleAppsBigtopDataItemsChangesApplierAppliersComponent, ComGoogleAppsBigtopDataItemsMessagesSyncItemMessagesSyncComponent, ComGoogleAppsBigtopDataItemsStorageControllersItemsStorageControllersComponent, ComGoogleAppsBigtopDataItemsStorageItemsStorageComponent, ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsStorageSyncStatusComponent, ComGoogleAppsBigtopDataItemsStorageTypesItemsStorageTypesComponent, ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncServiceComponent, ComGoogleAppsBigtopDataStorageControllersStorageControllersComponent, ComGoogleAppsBigtopDataStorageStorageComponent, ComGoogleCaribouComponentsServerpermidsClientItemServerPermIdGeneratorDaggerComponent;

@interface ComGoogleAppsBigtopDataItemsChangesStorageDaggerItemsChangesStorageComponentImpl_Builder : NSObject
{
    id <ComGoogleAppsBigtopDataItemsChangesApplierAppliersComponent> appliersComponent_;
    id <ComGoogleCaribouComponentsServerpermidsClientItemServerPermIdGeneratorDaggerComponent> itemServerPermIdGeneratorDaggerComponent_;
    id <ComGoogleAppsBigtopDataClientexperimentoverridesApiClientExperimentOverridesComponent> clientExperimentOverridesComponent_;
    id <ComGoogleAppsBigtopDataCommonCommonComponent> commonComponent_;
    ComGoogleAppsBigtopDataItemsConfigItemsConfigComponent *itemsConfigComponent_;
    id <ComGoogleAppsBigtopDataItemsMessagesSyncItemMessagesSyncComponent> itemMessagesSyncComponent_;
    id <ComGoogleAppsBigtopDataItemsStorageItemsStorageComponent> itemsStorageComponent_;
    id <ComGoogleAppsBigtopDataItemsStorageControllersItemsStorageControllersComponent> itemsStorageControllersComponent_;
    id <ComGoogleAppsBigtopDataItemsStorageSyncstatusItemsStorageSyncStatusComponent> itemsStorageSyncStatusComponent_;
    id <ComGoogleAppsBigtopDataItemsStorageTypesItemsStorageTypesComponent> itemsStorageTypesComponent_;
    id <ComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncServiceComponent> itemsSyncServiceComponent_;
    id <ComGoogleAppsBigtopDataStorageStorageComponent> storageComponent_;
    id <ComGoogleAppsBigtopDataStorageControllersStorageControllersComponent> storageControllersComponent_;
}

- (void)dealloc;
- (id)build;
- (id)storageControllersComponentWithComGoogleAppsBigtopDataStorageControllersStorageControllersComponent:(id)arg1;
- (id)storageComponentWithComGoogleAppsBigtopDataStorageStorageComponent:(id)arg1;
- (id)itemsSyncServiceComponentWithComGoogleAppsBigtopDataItemsSyncServiceApiItemsSyncServiceComponent:(id)arg1;
- (id)itemsStorageTypesComponentWithComGoogleAppsBigtopDataItemsStorageTypesItemsStorageTypesComponent:(id)arg1;
- (id)itemsStorageSyncStatusComponentWithComGoogleAppsBigtopDataItemsStorageSyncstatusItemsStorageSyncStatusComponent:(id)arg1;
- (id)itemsStorageControllersComponentWithComGoogleAppsBigtopDataItemsStorageControllersItemsStorageControllersComponent:(id)arg1;
- (id)itemsStorageComponentWithComGoogleAppsBigtopDataItemsStorageItemsStorageComponent:(id)arg1;
- (id)itemMessagesSyncComponentWithComGoogleAppsBigtopDataItemsMessagesSyncItemMessagesSyncComponent:(id)arg1;
- (id)itemsConfigComponentWithComGoogleAppsBigtopDataItemsConfigItemsConfigComponent:(id)arg1;
- (id)commonComponentWithComGoogleAppsBigtopDataCommonCommonComponent:(id)arg1;
- (id)clientExperimentOverridesComponentWithComGoogleAppsBigtopDataClientexperimentoverridesApiClientExperimentOverridesComponent:(id)arg1;
- (id)itemServerPermIdGeneratorDaggerComponentWithComGoogleCaribouComponentsServerpermidsClientItemServerPermIdGeneratorDaggerComponent:(id)arg1;
- (id)appliersComponentWithComGoogleAppsBigtopDataItemsChangesApplierAppliersComponent:(id)arg1;

@end

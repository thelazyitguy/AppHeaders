//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMRMaintenanceUIServiceData : NSObject
{
    struct Handle<std::__1::shared_ptr<core::MaintenanceUIServiceData>, std::__1::shared_ptr<core::MaintenanceUIServiceData>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setProductId:(id)arg1;
- (void)setRegistrationProductIdAndName:(id)arg1 productName:(id)arg2;
- (void)setCategoryIdForDetails:(id)arg1;
- (id)getAltadenaProductIdForSerialNumber;
- (id)getProductId;
- (id)getProductSerialNumber;
- (_Bool)getCareRedesignTipAvailable;
- (_Bool)getCategoryDetailsCanReset;
- (id)getCategoryDetailsHelpWebAddress;
- (id)getCategoryDetailsParts;
- (id)getBuyPartsWebAddress;
- (id)getPartsV2;
- (id)getCategories;
- (long long)getResetCategoryState;
- (long long)getRetrieveCategoriesState;
- (id)getStateChangelist;
- (const shared_ptr_4d795baf *)cppRef;
- (id)initWithCpp:(const shared_ptr_4d795baf *)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory;

@interface ComGoogleAppsBigtopDataItemsChangesApplierItemAppliedChangeFactory : NSObject
{
    ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory *messageVisibilityHelperFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)createSingleItemChangeFromModifyLabelsCommandWithComGoogleAppsBigtopServicesGmailModifyLabelsCommand:(id)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopDataItemsChangesApplierChangeApplier_ChangeAppliesTo:(id)arg3;
- (id)createSingleItemChangesForRollingBackWithComGoogleAppsBigtopDataItemsItemsInternalProto_ItemAppliedChange:(id)arg1 withComGoogleAppsBigtopDataItemsChangesApplierChangeApplier_ChangeAppliesTo:(id)arg2;
- (id)createItemAppliedChangeWithComGoogleAppsBigtopDataStorageSchemaItemEntry:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_SingleItemChange:(id)arg2;

@end

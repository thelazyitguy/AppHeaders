//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonBaseFunction-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig, ComGoogleAppsBigtopDataItemsItemsProto_ItemListSnapshot, ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelper, ComGoogleAppsBigtopSyncClientImplQuerymetadataQueryMetadataFactoryImpl, ComGoogleCommonBaseOptional, NSString;

@interface ComGoogleAppsBigtopSyncClientImplQuerymetadataQueryMetadataFactoryImpl_$Lambda$1 : NSObject <ComGoogleCommonBaseFunction>
{
    ComGoogleAppsBigtopSyncClientImplQuerymetadataQueryMetadataFactoryImpl *this$0_;
    ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfig *val$itemListConfig_;
    ComGoogleAppsBigtopDataItemsItemsProto_ItemListSnapshot *val$snapshot_;
    ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelper *val$messageVisibilityHelper_;
    ComGoogleCommonBaseOptional *val$transientAccountId_;
}

- (void)dealloc;
- (id)andThenWithJavaUtilFunctionFunction:(id)arg1;
- (id)composeWithJavaUtilFunctionFunction:(id)arg1;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsAddonsApiAddOnsService-Protocol.h"

@class ComGoogleAppsBigtopDataItemsAddonsAddOnDataListManager, NSString;
@protocol ComGoogleAppsBigtopDataNetworkAddonsApiAddOnsApiaryClient;

@interface ComGoogleAppsBigtopDataItemsAddonsAddOnsServiceServer : NSObject <ComGoogleAppsBigtopDataItemsAddonsApiAddOnsService>
{
    ComGoogleAppsBigtopDataItemsAddonsAddOnDataListManager *addOnDataListManager_;
    id <ComGoogleAppsBigtopDataNetworkAddonsApiAddOnsApiaryClient> addOnsApiaryClient_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getAddOnDataWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)composeEmailWithJAddOnsSubmitAddOnFormRequest:(id)arg1;
- (id)submitAddOnActionWithComGoogleAppsBigtopDataItemsItemsProto_SubmitAddOnActionRequest:(id)arg1;
- (id)refreshAddOnDataListWithComGoogleAppsBigtopDataItemsItemsProto_RefreshAddOnDataListRequest:(id)arg1;
- (id)stopAddOnCardListWithComGoogleAppsBigtopDataItemsItemsProto_StopAddOnCardListRequest:(id)arg1;
- (id)startAddOnCardListWithComGoogleAppsBigtopDataItemsItemsProto_StartAddOnCardListRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


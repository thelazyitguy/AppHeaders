//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplItemsApiInternalPermanentlyDeleteAllHelper-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, NSString;
@protocol ComGoogleAppsBigtopDataItemsChangesApiItemChangesService;

@interface ComGoogleAppsBigtopSyncClientImplItemsPermanentlyDeleteAllHelperImpl : NSObject <ComGoogleAppsBigtopSyncClientImplItemsApiInternalPermanentlyDeleteAllHelper>
{
    id <ComGoogleAppsBigtopDataItemsChangesApiItemChangesService> itemChangesService_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)permanentlyDeleteWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3 withJBTProgressListener:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsStorageMessagedetailsApiItemMessageDocAttachmentsCoordinator-Protocol.h"

@class ComGoogleAppsXplatStorageDbTransactionPromiseFactory, NSString;
@protocol ComGoogleAppsBigtopDataStorageSchemaItemMessageDocAttachmentDao;

@interface ComGoogleAppsBigtopDataItemsStorageMessagedetailsItemMessageDocAttachmentsCoordinatorImpl : NSObject <ComGoogleAppsBigtopDataItemsStorageMessagedetailsApiItemMessageDocAttachmentsCoordinator>
{
    id <ComGoogleAppsBigtopDataStorageSchemaItemMessageDocAttachmentDao> dao_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

+ (void)initialize;
- (void)dealloc;
- (id)removeWithJavaUtilList:(id)arg1;
- (id)insertDocAttachmentsFromMessageSummaryWithComGoogleAppsBigtopDataItemsItemsSlicesProtos_MessageSummary:(id)arg1;
- (id)getAllDocAttachments;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsTasksSharedDataRoomsChatService-Protocol.h"

@class GTEJavaExecutor, GTERPCDynamiteExecutors, NSString;

@interface GTETDLChatService : NSObject <ComGoogleAppsTasksSharedDataRoomsChatService>
{
    GTERPCDynamiteExecutors *_dynamiteRPCExecutors;
    GTEJavaExecutor *_tdlExecutor;
}

- (void).cxx_destruct;
- (void)didFinishGettingSpacesWithFuture:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)batchGetSpacesWithComGoogleChatV1BatchGetSpacesRequest:(id)arg1;
- (id)initWithDynamiteRPCExecutors:(id)arg1 tdlExecutor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


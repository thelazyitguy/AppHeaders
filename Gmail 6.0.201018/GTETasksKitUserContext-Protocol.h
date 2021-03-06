//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTEAccountIDProvider-Protocol.h"
#import "GTELinkOpenerProvider-Protocol.h"
#import "GTELoggersProvider-Protocol.h"
#import "GTERecurrenceLifecycleUpdaterProvider-Protocol.h"
#import "GTETasksKitFeatureFlagsProvider-Protocol.h"

@class GTEDataModelKey, NSObject;
@protocol GTETasksKitDataContext;

@protocol GTETasksKitUserContext <GTEAccountIDProvider, GTETasksKitFeatureFlagsProvider, GTELinkOpenerProvider, GTERecurrenceLifecycleUpdaterProvider, GTELoggersProvider>
- (void)signOut;
- (void)removeDataContextForDataModelKey:(GTEDataModelKey *)arg1;
- (NSObject<GTETasksKitDataContext> *)dataContextForDataModelKey:(GTEDataModelKey *)arg1;
@end


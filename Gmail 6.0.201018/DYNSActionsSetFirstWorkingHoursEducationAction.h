//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DYNSCommonKeyValueStore, DYNSNetworkApiRequestManager, DYNSStorageApiUserSettingsStorageController, JavaxInjectProvider;

@interface DYNSActionsSetFirstWorkingHoursEducationAction : NSObject
{
    id <DYNSCommonKeyValueStore> keyValueStore_;
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSNetworkApiRequestManager> requestManager_;
    id <DYNSStorageApiUserSettingsStorageController> userSettingsStorageController_;
}

- (void)dealloc;
- (id)execute;

@end

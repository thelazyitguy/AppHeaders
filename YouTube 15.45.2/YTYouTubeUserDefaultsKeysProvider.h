//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTUserDefaultsKeys.h>

#import "YTUserDefaultsKeysProvider-Protocol.h"

@class NSString;

@interface YTYouTubeUserDefaultsKeysProvider : YTUserDefaultsKeys <YTUserDefaultsKeysProvider>
{
}

- (id)computeSharedSettingsKeysForVersion:(long long)arg1;
- (id)sharedSettingsKeysForMigrationVersionNumber:(long long)arg1;
- (id)defaultSettingsDict;
- (id)userSpecificSettingKeyPrefixes;
- (id)userSpecificSettingKeys;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

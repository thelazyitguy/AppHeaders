//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface SMIUserDefaultsAdapter : NSObject
{
    NSUserDefaults *_userDefaults;
}

@property(readonly) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)createLocalizationPrefsHash:(id)arg1 locale:(id)arg2 currency:(id)arg3;
- (void)checkLocalizationPrefsList:(id)arg1;
- (id)getLocalizationPrefsList;
- (void)storeLocalizationPrefsList:(id)arg1;
- (id)init;

@end

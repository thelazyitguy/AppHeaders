//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLUtil : NSObject
{
}

+ (void)FadeInOut:(id)arg1 fadeInDuration:(float)arg2 fadeOutDuration:(float)arg3;
+ (void)fadeOut:(id)arg1 duration:(float)arg2;
+ (void)fadeIn:(id)arg1 duration:(float)arg2;
+ (id)getViewByComponentName:(id)arg1 componentName:(id)arg2;
+ (id)appBundleIdentifier;
+ (id)deviceName;
+ (id)screenResolution;
+ (id)language;
+ (id)deviceSystemName;
+ (id)deviceSystemVersion;
+ (void)replaceMacros:(id)arg1 eventData:(id)arg2 eventName:(id)arg3;
+ (id)dictionaryAsJsonOutput:(id)arg1;
+ (id)removeSpecialCharacters:(id)arg1;
+ (id)retreiveFileContents:(id)arg1 withExt:(id)arg2;
+ (id)libraryVersion;
+ (id)nibBundle;
+ (id)carrier;
+ (id)machineName;
+ (id)deviceConnectiontype;
+ (id)timestamp;
+ (id)deviceVersion;
+ (unsigned long long)clientWidth;
+ (unsigned long long)clientHeight;
+ (float)clientOffestTimeZone;
+ (id)deviceModel;
+ (id)platformName;
+ (_Bool)trackFlag;
+ (id)advertisterIdentifer;
+ (id)platformAppVersion;
+ (id)platformAppIdentifer;
+ (id)applicationVersion;
+ (id)applicationName;
+ (id)generateGuid;
+ (id)getDeviceId;
+ (unsigned long long)indexOfSpecificObject:(id)arg1 predicate:(id)arg2;
+ (unsigned long long)indexOfSpecificObject:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)urlValueForKey:(id)arg1 fromQueryItems:(id)arg2;
+ (id)nameFromURL:(id)arg1;
+ (id)sortDescriptor:(id)arg1 array:(id)arg2 ascending:(_Bool)arg3;
+ (struct CGSize)textSizeByFont:(id)arg1 font:(id)arg2;
+ (id)retrieveFont:(id)arg1 fontSize:(double)arg2;
+ (void)setFrameworkBundlePath:(id)arg1;
+ (id)getBundlePath;
- (_Bool)didKeyExist:(id)arg1 key:(id)arg2;

@end


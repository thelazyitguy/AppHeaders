//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterCrashlytics/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface FIROptions : NSObject <NSCopying>
{
    NSDictionary *_analyticsOptionsDictionary;
    _Bool _usingOptionsFromDefaultPlist;
    _Bool _editingLocked;
    NSString *_deepLinkURLScheme;
    NSString *_appGroupID;
    NSMutableDictionary *_optionsDictionary;
}

+ (void)resetDefaultOptions;
+ (id)plistFilePathWithName:(id)arg1;
+ (id)defaultOptionsDictionary;
+ (id)defaultOptions;
@property(nonatomic, getter=isEditingLocked) _Bool editingLocked; // @synthesize editingLocked=_editingLocked;
@property(nonatomic) _Bool usingOptionsFromDefaultPlist; // @synthesize usingOptionsFromDefaultPlist=_usingOptionsFromDefaultPlist;
@property(retain, nonatomic) NSMutableDictionary *optionsDictionary; // @synthesize optionsDictionary=_optionsDictionary;
@property(copy, nonatomic) NSString *appGroupID; // @synthesize appGroupID=_appGroupID;
@property(copy, nonatomic) NSString *deepLinkURLScheme; // @synthesize deepLinkURLScheme=_deepLinkURLScheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSignInEnabled;
@property(readonly, nonatomic) _Bool isAnalyticsEnabled;
@property(readonly, nonatomic) _Bool isAnalyticsCollectionDeactivated;
@property(readonly, nonatomic) _Bool isAnalyticsCollectionEnabled;
@property(readonly, nonatomic) _Bool isAnalyticsCollectionExplicitlySet;
@property(readonly, nonatomic) _Bool isMeasurementEnabled;
@property(readonly, nonatomic) NSDictionary *analyticsOptionsDictionary;
- (id)analyticsOptionsDictionaryWithInfoDictionary:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToOptions:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(copy, nonatomic) NSString *bundleID;
@property(copy, nonatomic) NSString *storageBucket;
@property(copy, nonatomic) NSString *databaseURL;
- (void)setLibraryVersionID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *libraryVersionID;
@property(copy, nonatomic) NSString *googleAppID;
@property(copy, nonatomic) NSString *androidClientID;
@property(copy, nonatomic) NSString *projectID;
@property(copy, nonatomic) NSString *GCMSenderID;
@property(copy, nonatomic) NSString *trackingID;
@property(copy, nonatomic) NSString *clientID;
@property(copy, nonatomic) NSString *APIKey;
- (void)checkEditingLocked;
- (id)initWithGoogleAppID:(id)arg1 GCMSenderID:(id)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initInternalWithOptionsDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MslClient/NSObject-Protocol.h>

@class APIConfiguration, NSData, NSString;

@protocol IDevice <NSObject>
+ (NSString *)deviceLanguage;
@property(readonly, copy, nonatomic) NSData *kpw;
@property(readonly, copy, nonatomic) NSData *kph;
@property(readonly, copy, nonatomic) NSData *kpe;
@property(readonly, copy, nonatomic) NSString *storagePath;
@property(readonly, copy, nonatomic) NSString *softwareVersion;
@property(readonly, copy, nonatomic) NSString *sdkVersion;
@property(readonly, nonatomic) NSString *friendlyName;
@property(readonly, copy, nonatomic) NSString *extendedESNPrefix;
@property(readonly, copy, nonatomic) NSString *ESNPrefix;
@property(readonly, copy, nonatomic) NSString *ESN;
@property(retain, nonatomic) APIConfiguration *configuration;
@property(readonly, nonatomic) int certificationVersion;
@property(readonly, nonatomic) NSString *applicationCachePath;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface ASPreinitRequestParams : NSObject
{
    NSString *_applicationKey;
    NSString *_versionKey;
    NSNumber *_asPlcId;
    NSNumber *_appId;
    NSNumber *_GDPRConsentKey;
    NSDictionary *_GDPRConsentObjectKey;
}

@property(retain, nonatomic) NSDictionary *GDPRConsentObjectKey; // @synthesize GDPRConsentObjectKey=_GDPRConsentObjectKey;
@property(retain, nonatomic) NSNumber *GDPRConsentKey; // @synthesize GDPRConsentKey=_GDPRConsentKey;
@property(retain, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSNumber *asPlcId; // @synthesize asPlcId=_asPlcId;
@property(retain, nonatomic) NSString *versionKey; // @synthesize versionKey=_versionKey;
@property(retain, nonatomic) NSString *applicationKey; // @synthesize applicationKey=_applicationKey;
- (void).cxx_destruct;
- (id)init;

@end

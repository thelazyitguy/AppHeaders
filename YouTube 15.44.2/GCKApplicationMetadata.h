//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class GCKSenderApplicationInfo, NSArray, NSString, NSURL;

@interface GCKApplicationMetadata : NSObject <NSCopying>
{
    NSString *_applicationID;
    NSString *_applicationName;
    NSArray *_images;
    NSURL *_iconURL;
    NSArray *_namespaces;
    GCKSenderApplicationInfo *_senderApplicationInfo;
    NSString *_applicationType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *applicationType; // @synthesize applicationType=_applicationType;
@property(readonly, copy, nonatomic) GCKSenderApplicationInfo *senderApplicationInfo; // @synthesize senderApplicationInfo=_senderApplicationInfo;
@property(readonly, copy, nonatomic) NSArray *namespaces; // @synthesize namespaces=_namespaces;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(readonly, copy, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)senderAppLaunchURL;
- (id)senderAppIdentifier;
- (id)init;
- (id)initWithJSONObject:(id)arg1 castToNativeEnabled:(_Bool)arg2;
- (id)initWithApplicationID:(id)arg1 applicationName:(id)arg2 iconURL:(id)arg3 namespaces:(id)arg4 applicationType:(id)arg5 senderApplicationInfo:(id)arg6;

@end


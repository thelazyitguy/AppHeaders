//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface MdxUpnpMdxInfo : NSObject
{
    NSString *_USN;
    NSURL *_location;
    NSString *_friendlyName;
    NSString *_mdxId;
    NSNumber *_supportsMsl;
    id _acceptsRegistrationType;
    NSNumber *_isRegistered;
    NSString *_userAgent;
    NSString *_caps;
}

- (void).cxx_destruct;
@property(readonly) NSString *caps; // @synthesize caps=_caps;
@property(readonly) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly) NSNumber *isRegistered; // @synthesize isRegistered=_isRegistered;
@property(readonly) id acceptsRegistrationType; // @synthesize acceptsRegistrationType=_acceptsRegistrationType;
@property(readonly) NSNumber *supportsMsl; // @synthesize supportsMsl=_supportsMsl;
@property(readonly) NSString *mdxId; // @synthesize mdxId=_mdxId;
@property(readonly) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(readonly) NSURL *location; // @synthesize location=_location;
@property(readonly) NSString *USN; // @synthesize USN=_USN;
- (id)initWithUSN:(id)arg1 location:(id)arg2 friendlyName:(id)arg3 mdxId:(id)arg4 supportsMsl:(id)arg5 acceptsRegistrationType:(id)arg6 isRegistered:(id)arg7 userAgent:(id)arg8 caps:(id)arg9;
- (id)serviceType;

@end


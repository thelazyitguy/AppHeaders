//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APIConfiguration, AppleNrdpBridge;
@protocol IDevice;

@interface AppleBridge : NSObject
{
    AppleNrdpBridge *_nrdp;
    APIConfiguration *_apiConfiguration;
    id <IDevice> _DAL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IDevice> DAL; // @synthesize DAL=_DAL;
@property(readonly, nonatomic) APIConfiguration *apiConfiguration; // @synthesize apiConfiguration=_apiConfiguration;
@property(readonly, nonatomic) AppleNrdpBridge *nrdp; // @synthesize nrdp=_nrdp;
- (void)shutdown;
- (id)initWithDAL:(id)arg1 configurationProvider:(id)arg2;

@end


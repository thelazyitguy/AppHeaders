//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BMDRMManager, BMSecureStorage;

@interface BMBetamaxOfflineManagerFactory : NSObject
{
    id <BMDRMManager> _drmManager;
    id <BMSecureStorage> _secureStorage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <BMSecureStorage> secureStorage; // @synthesize secureStorage=_secureStorage;
@property(retain, nonatomic) id <BMDRMManager> drmManager; // @synthesize drmManager=_drmManager;
- (id)createOfflineManagerWithMediaExtensions:(id)arg1;
- (id)initWithDRMManager:(id)arg1 secureStorage:(id)arg2;

@end


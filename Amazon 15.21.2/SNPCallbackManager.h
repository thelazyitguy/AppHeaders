//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SNPSynchronizedMap;

@interface SNPCallbackManager : NSObject
{
    SNPSynchronizedMap *_listenerMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SNPSynchronizedMap *listenerMap; // @synthesize listenerMap=_listenerMap;
- (void).cxx_destruct;
- (id)listenerForFeature:(id)arg1;
- (void)setListener:(id)arg1 forFeature:(id)arg2;

@end


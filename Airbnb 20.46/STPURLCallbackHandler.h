//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface STPURLCallbackHandler : NSObject
{
    NSArray *_callbacks;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *callbacks; // @synthesize callbacks=_callbacks;
- (void)unregisterListener:(id)arg1;
- (void)registerListener:(id)arg1 forURL:(id)arg2;
- (_Bool)handleURLCallback:(id)arg1;
- (id)init;

@end


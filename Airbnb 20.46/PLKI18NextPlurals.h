//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PLKI18NextPlurals : NSObject
{
    NSDictionary *_rules;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *rules; // @synthesize rules=_rules;
- (long long)numberForLang:(id)arg1 count:(unsigned long long)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ErrorPolicyBoss : NSObject
{
    NSArray *_policies;
}

+ (id)errorFormatterWithError:(id)arg1;
+ (id)sharedBoss;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *policies; // @synthesize policies=_policies;
- (id)init;

@end


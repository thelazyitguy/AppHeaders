//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/BugsnagApp.h>

@class NSNumber;

@interface BugsnagAppWithState : BugsnagApp
{
    _Bool _inForeground;
    NSNumber *_duration;
    NSNumber *_durationInForeground;
}

+ (id)appWithDictionary:(id)arg1 config:(id)arg2 codeBundleId:(id)arg3;
+ (id)appWithOomData:(id)arg1;
+ (id)appFromJson:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool inForeground; // @synthesize inForeground=_inForeground;
@property(retain, nonatomic) NSNumber *durationInForeground; // @synthesize durationInForeground=_durationInForeground;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
- (id)toDict;

@end

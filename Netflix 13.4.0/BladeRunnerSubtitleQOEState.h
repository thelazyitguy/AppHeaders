//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BladeRunnerSubtitleQOEState : NSObject
{
    NSMutableDictionary *_qoeData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *qoeData; // @synthesize qoeData=_qoeData;
- (id)_dataForDlId:(id)arg1;
- (id)currentState;
- (void)recordDlId:(id)arg1 expected:(long long)arg2 missed:(long long)arg3;
- (id)init;

@end


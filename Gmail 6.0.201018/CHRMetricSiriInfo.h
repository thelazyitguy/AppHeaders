//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CHRMetricSiriInfo : NSObject
{
    int _totalVoiceShortcuts;
    NSString *_shortcutType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int totalVoiceShortcuts; // @synthesize totalVoiceShortcuts=_totalVoiceShortcuts;
@property(readonly, copy, nonatomic) NSString *shortcutType; // @synthesize shortcutType=_shortcutType;
- (id)initWithShortcutType:(id)arg1 totalVoiceShortcuts:(int)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageA11yFeatureUsage1 : SPTLogMessage
{
    NSString *_anyValue;
    NSString *_inputAlternativesValue;
    NSString *_displayModifiedValue;
    NSString *_audioCuesValue;
}

+ (id)messageWithAny:(id)arg1 inputAlternatives:(id)arg2 displayModified:(id)arg3 audioCues:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *audioCuesValue; // @synthesize audioCuesValue=_audioCuesValue;
@property(copy, nonatomic) NSString *displayModifiedValue; // @synthesize displayModifiedValue=_displayModifiedValue;
@property(copy, nonatomic) NSString *inputAlternativesValue; // @synthesize inputAlternativesValue=_inputAlternativesValue;
@property(copy, nonatomic) NSString *anyValue; // @synthesize anyValue=_anyValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end


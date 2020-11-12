//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSCopying-Protocol.h>

@class GMSDGuidanceEvent, GMSx_CannedSpokenMessage, GMSx_StructuredSpokenText, GMSx_TTSConfiguration;

@interface GMSx_SpeechMessage : NSObject <NSCopying>
{
    int _type;
    GMSx_CannedSpokenMessage *_cannedMessage;
    GMSDGuidanceEvent *_guidanceEvent;
    GMSx_StructuredSpokenText *_spokenText;
    GMSx_TTSConfiguration *_ttsConfiguration;
}

+ (id)stepMessageForEvent:(id)arg1 futureTense:(_Bool)arg2 GMSx_TTSConfiguration:(id)arg3;
+ (id)distanceMessage:(id)arg1 baseMessage:(id)arg2 GMSx_TTSConfiguration:(id)arg3;
+ (id)speechMessageForEvent:(id)arg1 spokenText:(id)arg2 cannedMessage:(id)arg3 GMSx_TTSConfiguration:(id)arg4;
+ (id)speechMessageForAudioSettingChangedWithTTSConfiguration:(id)arg1;
+ (id)speechMessageForNavigationPrompt:(id)arg1 GMSx_TTSConfiguration:(id)arg2;
+ (id)speechMessageForText:(id)arg1 GMSx_TTSConfiguration:(id)arg2;
+ (id)speechMessageForEvent:(id)arg1 metersToStep:(int)arg2 distanceUnits:(long long)arg3 GMSx_TTSConfiguration:(id)arg4;
+ (id)baseMessageForEvent:(id)arg1 metersToStep:(int)arg2 distanceUnits:(long long)arg3 GMSx_TTSConfiguration:(id)arg4;
+ (id)speechMessageWithEvent:(id)arg1 type:(int)arg2 spokenText:(id)arg3 cannedMessage:(id)arg4 GMSx_TTSConfiguration:(id)arg5;
+ (_Bool)useGuidanceWithDistance;
+ (void)setUseGuidanceWithDistance:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) GMSx_TTSConfiguration *ttsConfiguration; // @synthesize ttsConfiguration=_ttsConfiguration;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) GMSx_StructuredSpokenText *spokenText; // @synthesize spokenText=_spokenText;
@property(readonly, nonatomic) GMSDGuidanceEvent *guidanceEvent; // @synthesize guidanceEvent=_guidanceEvent;
@property(readonly, nonatomic) GMSx_CannedSpokenMessage *cannedMessage; // @synthesize cannedMessage=_cannedMessage;
- (_Bool)isTrafficAlert;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 guidanceEvent:(id)arg2 spokenText:(id)arg3 cannedMessage:(id)arg4 GMSx_TTSConfiguration:(id)arg5;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTVoiceLibraryWakewordOptions : NSObject
{
    _Bool _seamlessVoiceEnabled;
    _Bool _includeWakewordInSeamlessVoice;
    long long _numberOfRetries;
}

@property(nonatomic) long long numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(nonatomic) _Bool includeWakewordInSeamlessVoice; // @synthesize includeWakewordInSeamlessVoice=_includeWakewordInSeamlessVoice;
@property(nonatomic) _Bool seamlessVoiceEnabled; // @synthesize seamlessVoiceEnabled=_seamlessVoiceEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


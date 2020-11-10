//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLCaptionTrack-Protocol.h>

@class AVMediaSelectionOption, NSString;

@interface MLAVMediaCaptionTrack : NSObject <MLCaptionTrack>
{
    AVMediaSelectionOption *_option;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVMediaSelectionOption *option; // @synthesize option=_option;
@property(readonly, nonatomic) long long channel;
@property(readonly, nonatomic) unsigned long long trackType;
@property(readonly, nonatomic) NSString *languageCode;
@property(readonly, nonatomic) NSString *displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMediaSelectionOption:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSString *VSSID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *trackName;

@end


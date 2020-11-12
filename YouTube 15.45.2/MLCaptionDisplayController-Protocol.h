//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MLFormat3Captions;
@protocol MLCaptionDisplaySettingsProvider;

@protocol MLCaptionDisplayController <NSObject>
@property(retain, nonatomic) id <MLCaptionDisplaySettingsProvider> captionDisplaySettingsProvider;
- (void)addFormat3Captions:(MLFormat3Captions *)arg1;
- (void)clearCaptions;
- (void)setCurrentMediaTime:(CDStruct_d60ef703)arg1;
- (void)setCaptionsHidden:(_Bool)arg1;
@end

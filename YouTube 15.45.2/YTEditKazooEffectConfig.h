//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditKazooEffectConfig-Protocol.h>

@class NSString, YTIFormattedString;

@interface YTEditKazooEffectConfig : NSObject <YTEditKazooEffectConfig>
{
    _Bool _shouldDisplayTitle;
    _Bool _configurable;
    YTIFormattedString *_displayTitle;
    long long _readyState;
    long long _thumbnailType;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isConfigurable) _Bool configurable; // @synthesize configurable=_configurable;
@property(nonatomic) long long thumbnailType; // @synthesize thumbnailType=_thumbnailType;
@property(nonatomic) long long readyState; // @synthesize readyState=_readyState;
@property(nonatomic) _Bool shouldDisplayTitle; // @synthesize shouldDisplayTitle=_shouldDisplayTitle;
@property(retain, nonatomic) YTIFormattedString *displayTitle; // @synthesize displayTitle=_displayTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

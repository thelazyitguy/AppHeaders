//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTEditOverlayButtonTitle-Protocol.h>

@class NSMutableDictionary, NSString;

@interface YTEditOverlayButtonTitleImpl : NSObject <YTEditOverlayButtonTitle>
{
    long long _titleFontKind;
    NSMutableDictionary *_localizedTitleMap;
    NSMutableDictionary *_a11yLabelMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *a11yLabelMap; // @synthesize a11yLabelMap=_a11yLabelMap;
@property(retain, nonatomic) NSMutableDictionary *localizedTitleMap; // @synthesize localizedTitleMap=_localizedTitleMap;
@property(nonatomic) long long titleFontKind; // @synthesize titleFontKind=_titleFontKind;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


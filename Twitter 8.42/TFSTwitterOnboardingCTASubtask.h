//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterOnboardingSubtask.h>

@class TFSTwitterOnboardingHeader, TFSTwitterOnboardingNavigationLink, TFSTwitterOnboardingRichText;

@interface TFSTwitterOnboardingCTASubtask : TFSTwitterOnboardingSubtask
{
    long long _style;
    TFSTwitterOnboardingHeader *_header;
    TFSTwitterOnboardingRichText *_detailText;
    TFSTwitterOnboardingNavigationLink *_primaryActionLink;
    TFSTwitterOnboardingNavigationLink *_secondaryActionLink;
    unsigned long long _primaryActionStyle;
    unsigned long long _secondaryActionStyle;
    long long _textAlignment;
}

+ (long long)version;
+ (id)typeNames;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) unsigned long long secondaryActionStyle; // @synthesize secondaryActionStyle=_secondaryActionStyle;
@property(readonly, nonatomic) unsigned long long primaryActionStyle; // @synthesize primaryActionStyle=_primaryActionStyle;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *secondaryActionLink; // @synthesize secondaryActionLink=_secondaryActionLink;
@property(readonly, nonatomic) TFSTwitterOnboardingNavigationLink *primaryActionLink; // @synthesize primaryActionLink=_primaryActionLink;
@property(readonly, nonatomic) TFSTwitterOnboardingRichText *detailText; // @synthesize detailText=_detailText;
@property(readonly, nonatomic) TFSTwitterOnboardingHeader *header; // @synthesize header=_header;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)initWithSubtaskID:(id)arg1 style:(long long)arg2 primaryText:(id)arg3 secondaryText:(id)arg4 detailText:(id)arg5 primaryActionLink:(id)arg6 secondaryActionLink:(id)arg7 primaryActionStyle:(unsigned long long)arg8 secondaryActionStyle:(unsigned long long)arg9 textAlignment:(long long)arg10 backNavigationType:(long long)arg11;
- (id)initWithJSONDictionary:(id)arg1 subtaskID:(id)arg2 typeName:(id)arg3 backNavigationType:(long long)arg4 backNavigationLink:(id)arg5 error:(id *)arg6;

@end


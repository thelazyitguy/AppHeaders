//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMRLocalizedStringDescriptor, CMRStatusVisualMediaDescriptor, NSString;

@interface CMRStatusContentDescriptor : NSObject
{
    CMRLocalizedStringDescriptor *_statusText;
    CMRLocalizedStringDescriptor *_detailedText;
    CMRLocalizedStringDescriptor *_metaText;
    NSString *_helpContentId;
    CMRLocalizedStringDescriptor *_missionTimeText;
    CMRStatusVisualMediaDescriptor *_visualMedia;
    long long _pause;
    long long _resume;
    long long _sendHome;
    long long _emptyBin;
    long long _locate;
    long long _endNow;
}

+ (id)StatusContentDescriptorWithStatusText:(id)arg1 detailedText:(id)arg2 metaText:(id)arg3 helpContentId:(id)arg4 missionTimeText:(id)arg5 visualMedia:(id)arg6 pause:(long long)arg7 resume:(long long)arg8 sendHome:(long long)arg9 emptyBin:(long long)arg10 locate:(long long)arg11 endNow:(long long)arg12;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long endNow; // @synthesize endNow=_endNow;
@property(readonly, nonatomic) long long locate; // @synthesize locate=_locate;
@property(readonly, nonatomic) long long emptyBin; // @synthesize emptyBin=_emptyBin;
@property(readonly, nonatomic) long long sendHome; // @synthesize sendHome=_sendHome;
@property(readonly, nonatomic) long long resume; // @synthesize resume=_resume;
@property(readonly, nonatomic) long long pause; // @synthesize pause=_pause;
@property(readonly, nonatomic) CMRStatusVisualMediaDescriptor *visualMedia; // @synthesize visualMedia=_visualMedia;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *missionTimeText; // @synthesize missionTimeText=_missionTimeText;
@property(readonly, nonatomic) NSString *helpContentId; // @synthesize helpContentId=_helpContentId;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *metaText; // @synthesize metaText=_metaText;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *detailedText; // @synthesize detailedText=_detailedText;
@property(readonly, nonatomic) CMRLocalizedStringDescriptor *statusText; // @synthesize statusText=_statusText;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStatusText:(id)arg1 detailedText:(id)arg2 metaText:(id)arg3 helpContentId:(id)arg4 missionTimeText:(id)arg5 visualMedia:(id)arg6 pause:(long long)arg7 resume:(long long)arg8 sendHome:(long long)arg9 emptyBin:(long long)arg10 locate:(long long)arg11 endNow:(long long)arg12;

@end


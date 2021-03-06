//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CMRZoneEditViewState : NSObject
{
    _Bool _canSave;
    _Bool _showSave;
    NSArray *_zoneNameData;
    NSArray *_zoneTypeData;
    NSString *_screenId;
    NSString *_subtitle;
    NSString *_customNameSuggestionId;
    NSString *_customName;
    NSArray *_errorMessages;
    NSString *_saveTextId;
}

+ (id)ZoneEditViewStateWithZoneNameData:(id)arg1 zoneTypeData:(id)arg2 screenId:(id)arg3 subtitle:(id)arg4 customNameSuggestionId:(id)arg5 customName:(id)arg6 errorMessages:(id)arg7 canSave:(_Bool)arg8 showSave:(_Bool)arg9 saveTextId:(id)arg10;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *saveTextId; // @synthesize saveTextId=_saveTextId;
@property(readonly, nonatomic) _Bool showSave; // @synthesize showSave=_showSave;
@property(readonly, nonatomic) _Bool canSave; // @synthesize canSave=_canSave;
@property(readonly, nonatomic) NSArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property(readonly, nonatomic) NSString *customName; // @synthesize customName=_customName;
@property(readonly, nonatomic) NSString *customNameSuggestionId; // @synthesize customNameSuggestionId=_customNameSuggestionId;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *screenId; // @synthesize screenId=_screenId;
@property(readonly, nonatomic) NSArray *zoneTypeData; // @synthesize zoneTypeData=_zoneTypeData;
@property(readonly, nonatomic) NSArray *zoneNameData; // @synthesize zoneNameData=_zoneNameData;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithZoneNameData:(id)arg1 zoneTypeData:(id)arg2 screenId:(id)arg3 subtitle:(id)arg4 customNameSuggestionId:(id)arg5 customName:(id)arg6 errorMessages:(id)arg7 canSave:(_Bool)arg8 showSave:(_Bool)arg9 saveTextId:(id)arg10;

@end


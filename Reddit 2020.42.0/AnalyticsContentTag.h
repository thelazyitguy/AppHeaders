//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsContentTag : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _mature_themesIsSet;
    _Bool _survey_answersIsSet;
    _Bool _rating_versionIsSet;
    NSMutableArray *_mature_themes;
    NSMutableArray *_survey_answers;
    NSString *_rating_version;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool rating_versionIsSet; // @synthesize rating_versionIsSet=_rating_versionIsSet;
@property(copy, nonatomic) NSString *rating_version; // @synthesize rating_version=_rating_version;
@property(nonatomic) _Bool survey_answersIsSet; // @synthesize survey_answersIsSet=_survey_answersIsSet;
@property(retain, nonatomic) NSMutableArray *survey_answers; // @synthesize survey_answers=_survey_answers;
@property(nonatomic) _Bool mature_themesIsSet; // @synthesize mature_themesIsSet=_mature_themesIsSet;
@property(retain, nonatomic) NSMutableArray *mature_themes; // @synthesize mature_themes=_mature_themes;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetRating_version;
- (void)unsetSurvey_answers;
- (void)unsetMature_themes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMature_themes:(id)arg1 survey_answers:(id)arg2 rating_version:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

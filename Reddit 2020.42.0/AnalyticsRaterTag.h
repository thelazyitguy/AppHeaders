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

@interface AnalyticsRaterTag : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _tagging_job_idIsSet;
    _Bool _tagging_questionIsSet;
    _Bool _tagging_question_objectIsSet;
    _Bool _module_typeIsSet;
    _Bool _rating_typeIsSet;
    _Bool _selected_answersIsSet;
    _Bool _non_selected_answersIsSet;
    _Bool _tagging_question_idIsSet;
    _Bool _selected_answer_idsIsSet;
    _Bool _non_selected_answer_idsIsSet;
    NSString *_tagging_job_id;
    NSString *_tagging_question;
    NSString *_tagging_question_object;
    NSString *_module_type;
    NSString *_rating_type;
    NSMutableArray *_selected_answers;
    NSMutableArray *_non_selected_answers;
    NSString *_tagging_question_id;
    NSMutableArray *_selected_answer_ids;
    NSMutableArray *_non_selected_answer_ids;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool non_selected_answer_idsIsSet; // @synthesize non_selected_answer_idsIsSet=_non_selected_answer_idsIsSet;
@property(retain, nonatomic) NSMutableArray *non_selected_answer_ids; // @synthesize non_selected_answer_ids=_non_selected_answer_ids;
@property(nonatomic) _Bool selected_answer_idsIsSet; // @synthesize selected_answer_idsIsSet=_selected_answer_idsIsSet;
@property(retain, nonatomic) NSMutableArray *selected_answer_ids; // @synthesize selected_answer_ids=_selected_answer_ids;
@property(nonatomic) _Bool tagging_question_idIsSet; // @synthesize tagging_question_idIsSet=_tagging_question_idIsSet;
@property(copy, nonatomic) NSString *tagging_question_id; // @synthesize tagging_question_id=_tagging_question_id;
@property(nonatomic) _Bool non_selected_answersIsSet; // @synthesize non_selected_answersIsSet=_non_selected_answersIsSet;
@property(retain, nonatomic) NSMutableArray *non_selected_answers; // @synthesize non_selected_answers=_non_selected_answers;
@property(nonatomic) _Bool selected_answersIsSet; // @synthesize selected_answersIsSet=_selected_answersIsSet;
@property(retain, nonatomic) NSMutableArray *selected_answers; // @synthesize selected_answers=_selected_answers;
@property(nonatomic) _Bool rating_typeIsSet; // @synthesize rating_typeIsSet=_rating_typeIsSet;
@property(copy, nonatomic) NSString *rating_type; // @synthesize rating_type=_rating_type;
@property(nonatomic) _Bool module_typeIsSet; // @synthesize module_typeIsSet=_module_typeIsSet;
@property(copy, nonatomic) NSString *module_type; // @synthesize module_type=_module_type;
@property(nonatomic) _Bool tagging_question_objectIsSet; // @synthesize tagging_question_objectIsSet=_tagging_question_objectIsSet;
@property(copy, nonatomic) NSString *tagging_question_object; // @synthesize tagging_question_object=_tagging_question_object;
@property(nonatomic) _Bool tagging_questionIsSet; // @synthesize tagging_questionIsSet=_tagging_questionIsSet;
@property(copy, nonatomic) NSString *tagging_question; // @synthesize tagging_question=_tagging_question;
@property(nonatomic) _Bool tagging_job_idIsSet; // @synthesize tagging_job_idIsSet=_tagging_job_idIsSet;
@property(copy, nonatomic) NSString *tagging_job_id; // @synthesize tagging_job_id=_tagging_job_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetNon_selected_answer_ids;
- (void)unsetSelected_answer_ids;
- (void)unsetTagging_question_id;
- (void)unsetNon_selected_answers;
- (void)unsetSelected_answers;
- (void)unsetRating_type;
- (void)unsetModule_type;
- (void)unsetTagging_question_object;
- (void)unsetTagging_question;
- (void)unsetTagging_job_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTagging_job_id:(id)arg1 tagging_question:(id)arg2 tagging_question_object:(id)arg3 module_type:(id)arg4 rating_type:(id)arg5 selected_answers:(id)arg6 non_selected_answers:(id)arg7 tagging_question_id:(id)arg8 selected_answer_ids:(id)arg9 non_selected_answer_ids:(id)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


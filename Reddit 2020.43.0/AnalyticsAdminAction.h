//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsAdminAction : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _password_dump_idIsSet;
    _Bool _number_password_dump_credentialsIsSet;
    _Bool _takedown_idIsSet;
    _Bool _removal_typeIsSet;
    _Bool _removal_is_restorable;
    _Bool _removal_is_restorableIsSet;
    _Bool _notesIsSet;
    _Bool _process_notesIsSet;
    _Bool _timeout_durationIsSet;
    _Bool _template_typeIsSet;
    _Bool _target_team_idIsSet;
    int _number_password_dump_credentials;
    int _timeout_duration;
    int _target_team_id;
    NSString *_password_dump_id;
    NSString *_takedown_id;
    NSString *_removal_type;
    NSString *_notes;
    NSString *_process_notes;
    NSString *_template_type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool target_team_idIsSet; // @synthesize target_team_idIsSet=_target_team_idIsSet;
@property(nonatomic) int target_team_id; // @synthesize target_team_id=_target_team_id;
@property(nonatomic) _Bool template_typeIsSet; // @synthesize template_typeIsSet=_template_typeIsSet;
@property(copy, nonatomic) NSString *template_type; // @synthesize template_type=_template_type;
@property(nonatomic) _Bool timeout_durationIsSet; // @synthesize timeout_durationIsSet=_timeout_durationIsSet;
@property(nonatomic) int timeout_duration; // @synthesize timeout_duration=_timeout_duration;
@property(nonatomic) _Bool process_notesIsSet; // @synthesize process_notesIsSet=_process_notesIsSet;
@property(copy, nonatomic) NSString *process_notes; // @synthesize process_notes=_process_notes;
@property(nonatomic) _Bool notesIsSet; // @synthesize notesIsSet=_notesIsSet;
@property(copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(nonatomic) _Bool removal_is_restorableIsSet; // @synthesize removal_is_restorableIsSet=_removal_is_restorableIsSet;
@property(nonatomic) _Bool removal_is_restorable; // @synthesize removal_is_restorable=_removal_is_restorable;
@property(nonatomic) _Bool removal_typeIsSet; // @synthesize removal_typeIsSet=_removal_typeIsSet;
@property(copy, nonatomic) NSString *removal_type; // @synthesize removal_type=_removal_type;
@property(nonatomic) _Bool takedown_idIsSet; // @synthesize takedown_idIsSet=_takedown_idIsSet;
@property(copy, nonatomic) NSString *takedown_id; // @synthesize takedown_id=_takedown_id;
@property(nonatomic) _Bool number_password_dump_credentialsIsSet; // @synthesize number_password_dump_credentialsIsSet=_number_password_dump_credentialsIsSet;
@property(nonatomic) int number_password_dump_credentials; // @synthesize number_password_dump_credentials=_number_password_dump_credentials;
@property(nonatomic) _Bool password_dump_idIsSet; // @synthesize password_dump_idIsSet=_password_dump_idIsSet;
@property(copy, nonatomic) NSString *password_dump_id; // @synthesize password_dump_id=_password_dump_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetTarget_team_id;
- (void)unsetTemplate_type;
- (void)unsetTimeout_duration;
- (void)unsetProcess_notes;
- (void)unsetNotes;
- (void)unsetRemoval_is_restorable;
- (void)unsetRemoval_type;
- (void)unsetTakedown_id;
- (void)unsetNumber_password_dump_credentials;
- (void)unsetPassword_dump_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassword_dump_id:(id)arg1 number_password_dump_credentials:(int)arg2 takedown_id:(id)arg3 removal_type:(id)arg4 removal_is_restorable:(_Bool)arg5 notes:(id)arg6 process_notes:(id)arg7 timeout_duration:(int)arg8 template_type:(id)arg9 target_team_id:(int)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

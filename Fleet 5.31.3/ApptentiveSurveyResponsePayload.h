//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Apptentive/ApptentivePayload.h>

@class NSDictionary, NSString;

@interface ApptentiveSurveyResponsePayload : ApptentivePayload
{
    NSDictionary *_answers;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *answers; // @synthesize answers=_answers;
- (id)contents;
- (id)containerName;
- (id)path;
- (id)type;
- (id)initWithAnswers:(id)arg1 identifier:(id)arg2 creationDate:(id)arg3 sessionIdentifier:(id)arg4;

@end

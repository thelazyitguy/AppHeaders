//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCheckInGuideStepAttachment, NSString;

@interface AIRCheckInGuideStep : AIRModel
{
    NSString *_stepID;
    AIRCheckInGuideStepAttachment *_attachment;
    NSString *_localizedNote;
    NSString *_note;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(readonly, copy, nonatomic) NSString *localizedNote; // @synthesize localizedNote=_localizedNote;
@property(readonly, copy, nonatomic) AIRCheckInGuideStepAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly, copy, nonatomic) NSString *stepID; // @synthesize stepID=_stepID;

@end

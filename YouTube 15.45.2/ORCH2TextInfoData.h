//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString, WHTSafeHtmlProto;

@interface ORCH2TextInfoData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *annotatedDisplayText; // @dynamic annotatedDisplayText;
@property(retain, nonatomic) WHTSafeHtmlProto *displayText; // @dynamic displayText;
@property(copy, nonatomic) NSString *displayTextClientRenderingTemplateSubstitutionKey; // @dynamic displayTextClientRenderingTemplateSubstitutionKey;
@property(nonatomic) _Bool hasAnnotatedDisplayText; // @dynamic hasAnnotatedDisplayText;
@property(nonatomic) _Bool hasDisplayText; // @dynamic hasDisplayText;
@property(nonatomic) _Bool hasDisplayTextClientRenderingTemplateSubstitutionKey; // @dynamic hasDisplayTextClientRenderingTemplateSubstitutionKey;

@end

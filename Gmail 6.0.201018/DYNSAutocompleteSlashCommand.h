//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSAutocompleteAutocompleteAnnotation.h"

@class ComGoogleAppsDynamiteV1MobileMessageAnnotations_MentionedUser, DYNProtoSlashCommandMetadata_Type, NSString;

@interface DYNSAutocompleteSlashCommand : DYNSAutocompleteAutocompleteAnnotation
{
    _Bool triggersDialog_;
    NSString *name_;
    NSString *botId_;
    NSString *argumentsHint_;
    NSString *commandId_;
    DYNProtoSlashCommandMetadata_Type *commandType_;
    ComGoogleAppsDynamiteV1MobileMessageAnnotations_MentionedUser *mentionedBot_;
}

- (void)dealloc;
- (id)getAnnotationWithInt:(int)arg1;
- (unsigned short)getAutocompleteAnnotationCharacter;
- (_Bool)canShiftWithInt:(int)arg1;
- (id)getMentionedBot;

@end


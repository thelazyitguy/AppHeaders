//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UjetJSQMessagesAvatarImageFactory : NSObject
{
    unsigned long long _diameter;
}

@property(readonly, nonatomic) unsigned long long diameter; // @synthesize diameter=_diameter;
- (id)jsq_circularImage:(id)arg1 withHighlightedColor:(id)arg2;
- (id)jsq_imageWithInitials:(id)arg1 backgroundColor:(id)arg2 textColor:(id)arg3 font:(id)arg4;
- (id)avatarImageWithUserInitials:(id)arg1 backgroundColor:(id)arg2 textColor:(id)arg3 font:(id)arg4;
- (id)circularAvatarHighlightedImage:(id)arg1;
- (id)circularAvatarImage:(id)arg1;
- (id)avatarImageWithImage:(id)arg1;
- (id)avatarImageWithPlaceholder:(id)arg1;
- (id)initWithDiameter:(unsigned long long)arg1;
- (id)init;

@end

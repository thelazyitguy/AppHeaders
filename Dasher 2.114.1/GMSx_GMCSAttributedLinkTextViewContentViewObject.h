//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NavigationFramework/GMSx_GMCSBaseContentViewObject.h>

@class NSAttributedString, NSDictionary, UIFont;
@protocol GMCSAttributedLinkTextViewContentViewObjectDelegate;

@interface GMSx_GMCSAttributedLinkTextViewContentViewObject : GMSx_GMCSBaseContentViewObject
{
    _Bool _textDragInteractionEnabled;
    id <GMCSAttributedLinkTextViewContentViewObjectDelegate> _delegate;
    NSAttributedString *_attributedContent;
    NSDictionary *_linkTextAttributes;
    UIFont *_defaultTextFont;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool textDragInteractionEnabled; // @synthesize textDragInteractionEnabled=_textDragInteractionEnabled;
@property(retain, nonatomic) UIFont *defaultTextFont; // @synthesize defaultTextFont=_defaultTextFont;
@property(retain, nonatomic) NSDictionary *linkTextAttributes; // @synthesize linkTextAttributes=_linkTextAttributes;
@property(retain, nonatomic) NSAttributedString *attributedContent; // @synthesize attributedContent=_attributedContent;
@property(nonatomic) __weak id <GMCSAttributedLinkTextViewContentViewObjectDelegate> delegate; // @synthesize delegate=_delegate;
- (Class)contentViewClass;
- (id)init;

@end

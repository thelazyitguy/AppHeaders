//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentViewObject.h>

@class NSString, UIFont;
@protocol SKTMaximizedViewControllerOptions;

@interface SKTSectionHeaderContentViewObject : GOOBaseContentViewObject
{
    NSString *_character;
    UIFont *_textFont;
    id <SKTMaximizedViewControllerOptions> _options;
}

+ (id)objectWithCharacter:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SKTMaximizedViewControllerOptions> options; // @synthesize options=_options;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *character; // @synthesize character=_character;
- (id)textColorForUIElement:(id)arg1;
- (Class)contentViewClass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASLayoutSpec.h>

@protocol ASLayoutElement;

@interface ASBackgroundLayoutSpec : ASLayoutSpec
{
}

+ (id)backgroundLayoutSpecWithChild:(id)arg1 background:(id)arg2;
@property(retain, nonatomic) id <ASLayoutElement> background;
- (id)child;
- (void)setChild:(id)arg1;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1 restrictedToSize:(CDStruct_99d2e400)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)initWithChild:(id)arg1 background:(id)arg2;

@end


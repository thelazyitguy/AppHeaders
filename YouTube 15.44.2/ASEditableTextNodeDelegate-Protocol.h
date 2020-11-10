//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class ASEditableTextNode, NSString;

@protocol ASEditableTextNodeDelegate <NSObject>

@optional
- (void)editableTextNodeDidFinishEditing:(ASEditableTextNode *)arg1;
- (void)editableTextNodeDidUpdateText:(ASEditableTextNode *)arg1;
- (void)editableTextNodeDidChangeSelection:(ASEditableTextNode *)arg1 fromSelectedRange:(struct _NSRange)arg2 toSelectedRange:(struct _NSRange)arg3 dueToEditing:(_Bool)arg4;
- (_Bool)editableTextNode:(ASEditableTextNode *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)editableTextNodeDidBeginEditing:(ASEditableTextNode *)arg1;
- (_Bool)editableTextNodeShouldBeginEditing:(ASEditableTextNode *)arg1;
@end


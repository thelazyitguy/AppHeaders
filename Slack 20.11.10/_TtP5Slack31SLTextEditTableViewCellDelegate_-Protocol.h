//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UITextField, _TtC5Slack23SLTextEditTableViewCell;

@protocol _TtP5Slack31SLTextEditTableViewCellDelegate_
- (_Bool)textEditTableCell:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)textEditTableCellDidBeginEditing:(_TtC5Slack23SLTextEditTableViewCell *)arg1;
- (void)textEditTableCellDidEditText:(_TtC5Slack23SLTextEditTableViewCell *)arg1 text:(NSString *)arg2;

@optional
- (void)textEditTableCellDidReturn:(UITextField *)arg1;
@end


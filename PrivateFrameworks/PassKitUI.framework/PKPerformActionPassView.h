/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPerformActionPassView : UIView {
    UIView * _backdropView;
    PKPass * _pass;
    UIImageView * _passView;
    PKPassSnapshotter * _snapshotter;
}

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_loadSnapshotView;
- (struct CGSize { float x1; float x2; })_passImageSize;
- (id)initWithPass:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)layoutSubviews;
- (void)shakeCard;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end

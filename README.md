# CPP Module 00

42Tokyo C++課題のModule 00です。C++の基本的な概念を学習します。

## 概要

このモジュールでは以下のC++の基本概念を学習します：
- 名前空間（Namespace）
- クラス（Class）
- メンバ関数（Member functions）
- stdio streams
- 初期化リスト（Initialization lists）
- 静的（Static）
- Const等

## 課題

### Exercise 00: Megaphone
**ディレクトリ**: `ex00/`

引数を大文字に変換して出力するプログラム。
- 引数がない場合は `* LOUD AND UNBEARABLE FEEDBACK NOISE *` を出力
- 引数がある場合は全て大文字に変換して出力

**コンパイル・実行**:
```bash
./megaphone "hello world"
```

### Exercise 01: My Awesome PhoneBook
**ディレクトリ**: `ex01/`

連絡先を管理する電話帳プログラム。
- 最大8件の連絡先を保存
- ADD: 新しい連絡先を追加
- SEARCH: 連絡先を検索・表示
- EXIT: プログラム終了

**コンパイル・実行**:
```bash
./phonebook
```

### Exercise 02: The Job Of Your Dreams
**ディレクトリ**: `ex02/`

与えられたAccount.hppに基づいてAccount.cppを実装する課題。
- 静的メンバ変数とメンバ関数の実装
- ログファイルの出力形式に合わせた実装

**コンパイル・実行**:
```bash
./account
```

## コンパイル要件

- C++98標準
- フラグ: `-Wall -Wextra -Werror -std=c++98`
- 各exerciseにMakefileが含まれています
